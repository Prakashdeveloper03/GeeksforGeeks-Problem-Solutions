import java.io.*;
import java.util.*;

class GFG {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int T = Integer.parseInt(br.readLine().trim());
    while (T-- > 0) {
      String[] s = br.readLine().trim().split(" ");
      int V = Integer.parseInt(s[0]);
      int E = Integer.parseInt(s[1]);
      ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
      for (int i = 0; i < V; i++) adj.add(i, new ArrayList<Integer>());
      for (int i = 0; i < E; i++) {
        String[] S = br.readLine().trim().split(" ");
        int u = Integer.parseInt(S[0]);
        int v = Integer.parseInt(S[1]);
        adj.get(u).add(v);
        adj.get(v).add(u);
      }
      Solution obj = new Solution();
      ArrayList<ArrayList<Integer>> ans = obj.criticalConnections(V, adj);
      for (int i = 0; i < ans.size(); i++)
        System.out.println(ans.get(i).get(0) + " " + ans.get(i).get(1));
    }
  }
}

class Solution {
  private int timer = 0;

  public void dfs(
      int node,
      int parent,
      boolean[] vis,
      int[] tin,
      int[] low,
      ArrayList<ArrayList<Integer>> bridges,
      ArrayList<ArrayList<Integer>> adj) {
    vis[node] = true;
    tin[node] = timer;
    low[node] = timer;
    timer++;

    for (Integer neighbor : adj.get(node)) {

      if (neighbor == parent) {
        continue;
      }

      if (!vis[neighbor]) {

        dfs(neighbor, node, vis, tin, low, bridges, adj);

        low[node] = Math.min(low[node], low[neighbor]);

        if (low[neighbor] > tin[node]) {
          if (node < neighbor) {
            bridges.add(new ArrayList<>(Arrays.asList(node, neighbor)));
          } else {
            bridges.add(new ArrayList<>(Arrays.asList(neighbor, node)));
          }
        }

      } else {

        low[node] = Math.min(low[node], low[neighbor]);
      }
    }
  }

  public ArrayList<ArrayList<Integer>> criticalConnections(
      int V, ArrayList<ArrayList<Integer>> adj) {
    boolean[] vis = new boolean[V];
    int[] tin = new int[V];
    int[] low = new int[V];

    ArrayList<ArrayList<Integer>> bridges = new ArrayList<>();

    dfs(0, -1, vis, tin, low, bridges, adj);

    Collections.sort(
        bridges,
        new Comparator<ArrayList<Integer>>() {
          @Override
          public int compare(ArrayList<Integer> v1, ArrayList<Integer> v2) {
            if (v1.get(0) < v2.get(0)) {
              return -1;
            } else if (v1.get(0) > v2.get(0)) {
              return 1;
            } else {
              if (v1.get(1) <= v2.get(1)) {
                return -1;
              } else {
                return 1;
              }
            }
          }
        });

    return bridges;
  }
}
