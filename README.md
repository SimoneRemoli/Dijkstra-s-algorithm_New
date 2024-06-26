<h1 align="center">
  Dijkstra's algorithm
  <img src="https://graphicmaths.com/img/computer-science/graph-theory/dijkstras-algorithm/graph.png" width="30px"/>
</h1>
I created a version of the shortest paths algorithm using the DOT library, which is a filter for drawing directed graphs.
The program constructs the graph in real time and associates the weight with each edge.

<p align="center"> </p>


<p align="center"><img src= "https://cdn.pixabay.com/photo/2018/07/14/11/32/network-3537400_960_720.png" alt="MaxKB" width="300" /></p>
<h3 align="center">Simone Remoli</h3>
<p align="center">
  <a href="https://www.gnu.org/licenses/gpl-3.0.html#license-text"><img src="https://img.shields.io/github/license/1Panel-dev/maxkb?color=%231890FF" alt="License: GPL v3"></a> 
</p>
<hr/>




<h3 align="center"> Let's look at how it works. :mag:</h3> 


### Tools :wrench:

| Name  | Description |
| ------------- | ------------- |
| Dot  | Filter for drawing directed graphs  |
| Make  | A way of automating software building procedure  |

### Execute :computer:
Copy the folder inside your local device and open it with the terminal, the procedure works with any **unix-based** terminal so if you have a **windows-based** device use Cygwin and execute the commands from there.
To install the DOT Graphviz library necessary for graph visualization, you can type the following command in the terminal:

## DOT - DEBIAN / UBUNTU

```
sudo apt install graphviz
```

## DOT - Fedora, Rocky Linux, Redhat Enterprise Linux, or CentOS

```
sudo dnf install graphviz
```
Use `git clone` to clone a repository from GitHub.com to your local computer.

## DOT - Windows :wine_glass:

<ul>
<li>graphviz-11.0.0
<ul>
<li><a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_msbuild_Release_graphviz-11.0.0-win32.zip">graphviz-11.0.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_msbuild_Release_graphviz-11.0.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
  <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_Graphviz-11.0.0-win64.zip">graphviz-11.0.0 (64-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_Graphviz-11.0.0-win64.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
<li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_graphviz-install-11.0.0-win32.exe">graphviz-11.0.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_graphviz-install-11.0.0-win32.exe.sha256">sha256</a>]</li>
        
<li>
         <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_graphviz-install-11.0.0-win64.exe">graphviz-11.0.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_graphviz-install-11.0.0-win64.exe.sha256">sha256</a>]</li>

_Install Cygwin from <a href="https://www.cygwin.com/install.html">here</a>._

<br>

## Source execution example :bulb:
After you clone into your folder you need to run the `make all` command.
<img width="569" alt="Screenshot 2024-06-26 alle 13 32 24" src="https://github.com/SimoneRemoli/Dijkstra-s-algorithm_New/assets/118252611/d2c191a8-21a4-4bf5-839a-d7a860cf3593">
<br>
_Now let's run the code._
`executable_dijkstra` is the executable just created by the make file
<img width="569" alt="Screenshot 2024-06-26 alle 13 34 19" src="https://github.com/SimoneRemoli/Dijkstra-s-algorithm_New/assets/118252611/9d9eee50-b0f4-48a3-96e3-bee5561f9821">

<img width="480" alt="Screenshot 2024-06-26 alle 13 39 45" src="https://github.com/SimoneRemoli/Dijkstra-s-algorithm_New/assets/118252611/47285a1d-8d4a-4761-965a-fb6fa9ea06a0">
<br>
As you can see, an adjacency matrix has been generated and the PDF containing the graph design has been created.
<br>
<h2>The pdf was created successfully. Let's open it.</h2>
<br>
<img width="490" alt="Screenshot 2024-06-26 alle 13 45 01" src="https://github.com/SimoneRemoli/Dijkstra-s-algorithm_New/assets/118252611/7f19f057-ab26-4422-8a2d-a424bf24ad02">
<br>

| Known  | Cost |
| ------------- | ------------- |
| 0  | 0 |
| 1  | 6 |
| 2  | 20 |
| 3  | 14 |
| 4  | 2 |
| 5  | 11 |
| 6  | 10 |
| 7  | 11 | 

As you can see, the software creates a graph where specific weights are associated with the nodes, but it is extremely intelligent and produces the "shortest" path starting from node 0 towards all the other nodes. In particular, the table clearly tells us the **"minimum effort"** to reach any other node.
For example, to reach node 2, starting from node 0, the cost will be 20 because you will have to pass through intermediate nodes which are 4,1,6,10. 
**The path is: 0->4->1->6->10->2.**
This is the shortest route.

<h1> Example 2</h1>
<img width="410" alt="Screenshot 2024-06-26 alle 13 59 03" src="https://github.com/SimoneRemoli/Dijkstra-s-algorithm_New/assets/118252611/c3783e39-d382-47ef-bd74-c28e52aee8df">
<br>
<img width="300" alt="Screenshot 2024-06-26 alle 14 00 18" src="https://github.com/SimoneRemoli/Dijkstra-s-algorithm_New/assets/118252611/b3bb08ef-4e89-4205-820d-c7ddcbaf8747">
