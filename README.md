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
<li>
<p>Stable Windows install packages, built with Microsoft Visual Studio 16 2019:</p>
<ul>
  
    
    <li>graphviz-11.0.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_msbuild_Release_graphviz-11.0.0-win32.zip">graphviz-11.0.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_msbuild_Release_graphviz-11.0.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_Graphviz-11.0.0-win64.zip">graphviz-11.0.0 (64-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_Graphviz-11.0.0-win64.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_graphviz-install-11.0.0-win32.exe">graphviz-11.0.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_graphviz-install-11.0.0-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_graphviz-install-11.0.0-win64.exe">graphviz-11.0.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/11.0.0/windows_10_cmake_Release_graphviz-install-11.0.0-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-10.0.1
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/10.0.1/windows_10_msbuild_Release_graphviz-10.0.1-win32.zip">graphviz-10.0.1 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/10.0.1/windows_10_msbuild_Release_graphviz-10.0.1-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/10.0.1/windows_10_cmake_Release_Graphviz-10.0.1-win64.zip">graphviz-10.0.1 (64-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/10.0.1/windows_10_cmake_Release_Graphviz-10.0.1-win64.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/10.0.1/windows_10_cmake_Release_graphviz-install-10.0.1-win32.exe">graphviz-10.0.1 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/10.0.1/windows_10_cmake_Release_graphviz-install-10.0.1-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/10.0.1/windows_10_cmake_Release_graphviz-install-10.0.1-win64.exe">graphviz-10.0.1 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/10.0.1/windows_10_cmake_Release_graphviz-install-10.0.1-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-9.0.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/9.0.0/windows_10_msbuild_Release_graphviz-9.0.0-win32.zip">graphviz-9.0.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/9.0.0/windows_10_msbuild_Release_graphviz-9.0.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/9.0.0/windows_10_cmake_Release_graphviz-install-9.0.0-win64.exe">graphviz-9.0.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/9.0.0/windows_10_cmake_Release_graphviz-install-9.0.0-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/9.0.0/windows_10_cmake_Release_graphviz-install-9.0.0-win32.exe">graphviz-9.0.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/9.0.0/windows_10_cmake_Release_graphviz-install-9.0.0-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-8.1.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.1.0/windows_10_msbuild_Release_graphviz-8.1.0-win32.zip">graphviz-8.1.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.1.0/windows_10_msbuild_Release_graphviz-8.1.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.1.0/windows_10_cmake_Release_graphviz-install-8.1.0-win64.exe">graphviz-8.1.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.1.0/windows_10_cmake_Release_graphviz-install-8.1.0-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.1.0/windows_10_cmake_Release_graphviz-install-8.1.0-win32.exe">graphviz-8.1.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.1.0/windows_10_cmake_Release_graphviz-install-8.1.0-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-8.0.5
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.5/windows_10_msbuild_Release_graphviz-8.0.5-win32.zip">graphviz-8.0.5 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.5/windows_10_msbuild_Release_graphviz-8.0.5-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.5/windows_10_cmake_Release_graphviz-install-8.0.5-win64.exe">graphviz-8.0.5 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.5/windows_10_cmake_Release_graphviz-install-8.0.5-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.5/windows_10_cmake_Release_graphviz-install-8.0.5-win32.exe">graphviz-8.0.5 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.5/windows_10_cmake_Release_graphviz-install-8.0.5-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-8.0.3
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.3/windows_10_msbuild_Release_graphviz-8.0.3-win32.zip">graphviz-8.0.3 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.3/windows_10_msbuild_Release_graphviz-8.0.3-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.3/windows_10_cmake_Release_graphviz-install-8.0.3-win64.exe">graphviz-8.0.3 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.3/windows_10_cmake_Release_graphviz-install-8.0.3-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.3/windows_10_cmake_Release_graphviz-install-8.0.3-win32.exe">graphviz-8.0.3 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.3/windows_10_cmake_Release_graphviz-install-8.0.3-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-8.0.2
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.2/windows_10_msbuild_Release_graphviz-8.0.2-win32.zip">graphviz-8.0.2 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.2/windows_10_msbuild_Release_graphviz-8.0.2-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.2/windows_10_cmake_Release_graphviz-install-8.0.2-win32.exe">graphviz-8.0.2 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.2/windows_10_cmake_Release_graphviz-install-8.0.2-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.2/windows_10_cmake_Release_graphviz-install-8.0.2-win64.exe">graphviz-8.0.2 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.2/windows_10_cmake_Release_graphviz-install-8.0.2-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-8.0.1
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.1/windows_10_msbuild_Release_graphviz-8.0.1-win32.zip">graphviz-8.0.1 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.1/windows_10_msbuild_Release_graphviz-8.0.1-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.1/windows_10_cmake_Release_graphviz-install-8.0.1-win64.exe">graphviz-8.0.1 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.1/windows_10_cmake_Release_graphviz-install-8.0.1-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.1/windows_10_cmake_Release_graphviz-install-8.0.1-win32.exe">graphviz-8.0.1 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/8.0.1/windows_10_cmake_Release_graphviz-install-8.0.1-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-7.1.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.1.0/windows_10_msbuild_Release_graphviz-7.1.0-win32.zip">graphviz-7.1.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.1.0/windows_10_msbuild_Release_graphviz-7.1.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.1.0/windows_10_cmake_Release_graphviz-install-7.1.0-win64.exe">graphviz-7.1.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.1.0/windows_10_cmake_Release_graphviz-install-7.1.0-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.1.0/windows_10_cmake_Release_graphviz-install-7.1.0-win32.exe">graphviz-7.1.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.1.0/windows_10_cmake_Release_graphviz-install-7.1.0-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-7.0.6
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.6/windows_10_msbuild_Release_graphviz-7.0.6-win32.zip">graphviz-7.0.6 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.6/windows_10_msbuild_Release_graphviz-7.0.6-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.6/windows_10_cmake_Release_graphviz-install-7.0.6-win32.exe">graphviz-7.0.6 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.6/windows_10_cmake_Release_graphviz-install-7.0.6-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.6/windows_10_cmake_Release_graphviz-install-7.0.6-win64.exe">graphviz-7.0.6 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.6/windows_10_cmake_Release_graphviz-install-7.0.6-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-7.0.5
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.5/windows_10_msbuild_Release_graphviz-7.0.5-win32.zip">graphviz-7.0.5 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.5/windows_10_msbuild_Release_graphviz-7.0.5-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.5/windows_10_cmake_Release_graphviz-install-7.0.5-win32.exe">graphviz-7.0.5 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.5/windows_10_cmake_Release_graphviz-install-7.0.5-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.5/windows_10_cmake_Release_graphviz-install-7.0.5-win64.exe">graphviz-7.0.5 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.5/windows_10_cmake_Release_graphviz-install-7.0.5-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-7.0.4
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.4/windows_10_msbuild_Release_graphviz-7.0.4-win32.zip">graphviz-7.0.4 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.4/windows_10_msbuild_Release_graphviz-7.0.4-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.4/windows_10_cmake_Release_graphviz-install-7.0.4-win32.exe">graphviz-7.0.4 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.4/windows_10_cmake_Release_graphviz-install-7.0.4-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.4/windows_10_cmake_Release_graphviz-install-7.0.4-win64.exe">graphviz-7.0.4 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.4/windows_10_cmake_Release_graphviz-install-7.0.4-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-7.0.3
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.3/windows_10_msbuild_Release_graphviz-7.0.3-win32.zip">graphviz-7.0.3 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.3/windows_10_msbuild_Release_graphviz-7.0.3-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.3/windows_10_cmake_Release_graphviz-install-7.0.3-win32.exe">graphviz-7.0.3 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.3/windows_10_cmake_Release_graphviz-install-7.0.3-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.3/windows_10_cmake_Release_graphviz-install-7.0.3-win64.exe">graphviz-7.0.3 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.3/windows_10_cmake_Release_graphviz-install-7.0.3-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-7.0.2
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.2/windows_10_msbuild_Release_graphviz-7.0.2-win32.zip">graphviz-7.0.2 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.2/windows_10_msbuild_Release_graphviz-7.0.2-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.2/windows_10_cmake_Release_graphviz-install-7.0.2-win32.exe">graphviz-7.0.2 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.2/windows_10_cmake_Release_graphviz-install-7.0.2-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.2/windows_10_cmake_Release_graphviz-install-7.0.2-win64.exe">graphviz-7.0.2 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.2/windows_10_cmake_Release_graphviz-install-7.0.2-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-7.0.1
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.1/windows_10_msbuild_Release_graphviz-7.0.1-win32.zip">graphviz-7.0.1 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.1/windows_10_msbuild_Release_graphviz-7.0.1-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.1/windows_10_cmake_Release_graphviz-install-7.0.1-win64.exe">graphviz-7.0.1 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.1/windows_10_cmake_Release_graphviz-install-7.0.1-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.1/windows_10_cmake_Release_graphviz-install-7.0.1-win32.exe">graphviz-7.0.1 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.1/windows_10_cmake_Release_graphviz-install-7.0.1-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-7.0.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.0/windows_10_msbuild_Release_graphviz-7.0.0-win32.zip">graphviz-7.0.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.0/windows_10_msbuild_Release_graphviz-7.0.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.0/windows_10_cmake_Release_graphviz-install-7.0.0-win64.exe">graphviz-7.0.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.0/windows_10_cmake_Release_graphviz-install-7.0.0-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.0/windows_10_cmake_Release_graphviz-install-7.0.0-win32.exe">graphviz-7.0.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/7.0.0/windows_10_cmake_Release_graphviz-install-7.0.0-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-6.0.2
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.2/windows_10_msbuild_Release_graphviz-6.0.2-win32.zip">graphviz-6.0.2 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.2/windows_10_msbuild_Release_graphviz-6.0.2-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.2/windows_10_cmake_Release_graphviz-install-6.0.2-win64.exe">graphviz-6.0.2 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.2/windows_10_cmake_Release_graphviz-install-6.0.2-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.2/windows_10_cmake_Release_graphviz-install-6.0.2-win32.exe">graphviz-6.0.2 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.2/windows_10_cmake_Release_graphviz-install-6.0.2-win32.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-6.0.1
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.1/windows_10_msbuild_Release_graphviz-6.0.1-win32.zip">graphviz-6.0.1 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.1/windows_10_msbuild_Release_graphviz-6.0.1-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.1/windows_10_cmake_Release_graphviz-install-6.0.1-win32.exe">graphviz-6.0.1 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.1/windows_10_cmake_Release_graphviz-install-6.0.1-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.1/windows_10_cmake_Release_graphviz-install-6.0.1-win64.exe">graphviz-6.0.1 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/6.0.1/windows_10_cmake_Release_graphviz-install-6.0.1-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-5.0.1
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.1/windows_10_msbuild_Release_graphviz-5.0.1-win32.zip">graphviz-5.0.1 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.1/windows_10_msbuild_Release_graphviz-5.0.1-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.1/windows_10_cmake_Release_graphviz-install-5.0.1-win32.exe">graphviz-5.0.1 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.1/windows_10_cmake_Release_graphviz-install-5.0.1-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.1/windows_10_cmake_Release_graphviz-install-5.0.1-win64.exe">graphviz-5.0.1 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.1/windows_10_cmake_Release_graphviz-install-5.0.1-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-5.0.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.0/windows_10_msbuild_Release_graphviz-5.0.0-win32.zip">graphviz-5.0.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.0/windows_10_msbuild_Release_graphviz-5.0.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.0/windows_10_cmake_Release_graphviz-install-5.0.0-win32.exe">graphviz-5.0.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.0/windows_10_cmake_Release_graphviz-install-5.0.0-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.0/windows_10_cmake_Release_graphviz-install-5.0.0-win64.exe">graphviz-5.0.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/5.0.0/windows_10_cmake_Release_graphviz-install-5.0.0-win64.exe.sha256">sha256</a>]</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-4.0.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/4.0.0/windows_10_cmake_Release_graphviz-install-4.0.0-win32.exe">graphviz-4.0.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/4.0.0/windows_10_cmake_Release_graphviz-install-4.0.0-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/4.0.0/windows_10_cmake_Release_graphviz-install-4.0.0-win64.exe">graphviz-4.0.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/4.0.0/windows_10_cmake_Release_graphviz-install-4.0.0-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/4.0.0/windows_10_msbuild_Release_graphviz-4.0.0-win32.zip">graphviz-4.0.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/4.0.0/windows_10_msbuild_Release_graphviz-4.0.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-3.0.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/3.0.0/windows_10_cmake_Release_graphviz-install-3.0.0-win32.exe">graphviz-3.0.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/3.0.0/windows_10_cmake_Release_graphviz-install-3.0.0-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/3.0.0/windows_10_cmake_Release_graphviz-install-3.0.0-win64.exe">graphviz-3.0.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/3.0.0/windows_10_cmake_Release_graphviz-install-3.0.0-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/3.0.0/windows_10_msbuild_Release_graphviz-3.0.0-win32.zip">graphviz-3.0.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/3.0.0/windows_10_msbuild_Release_graphviz-3.0.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        
      </ul>
    </li>
    
  
    
    <li>graphviz-2.50.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.50.0/windows_10_cmake_Release_graphviz-install-2.50.0-win32.exe">graphviz-2.50.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.50.0/windows_10_cmake_Release_graphviz-install-2.50.0-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.50.0/windows_10_cmake_Release_graphviz-install-2.50.0-win64.exe">graphviz-2.50.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.50.0/windows_10_cmake_Release_graphviz-install-2.50.0-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.50.0/windows_10_msbuild_Release_graphviz-2.50.0-win32.zip">graphviz-2.50.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.50.0/windows_10_msbuild_Release_graphviz-2.50.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        
        <li>Further graphviz-2.50.0 variants available on <a href="https://gitlab.com/graphviz/graphviz/-/packages/4055384">GitLab</a></li>
        
      </ul>
    </li>
    
  
    
    <li>graphviz-2.49.3
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.3/stable_windows_10_cmake_Release_Win32_graphviz-install-2.49.3-win32.exe">graphviz-2.49.3 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.3/stable_windows_10_cmake_Release_Win32_graphviz-install-2.49.3-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.3/stable_windows_10_cmake_Release_x64_graphviz-install-2.49.3-win64.exe">graphviz-2.49.3 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.3/stable_windows_10_cmake_Release_x64_graphviz-install-2.49.3-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.3/stable_windows_10_msbuild_Release_Win32_graphviz-2.49.3-win32.zip">graphviz-2.49.3 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.3/stable_windows_10_msbuild_Release_Win32_graphviz-2.49.3-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        
        <li>Further graphviz-2.49.3 variants available on <a href="https://gitlab.com/graphviz/graphviz/-/packages/3438577">GitLab</a></li>
        
      </ul>
    </li>
    
  
    
    <li>graphviz-2.49.2
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.2/stable_windows_10_cmake_Release_Win32_graphviz-install-2.49.2-win32.exe">graphviz-2.49.2 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.2/stable_windows_10_cmake_Release_Win32_graphviz-install-2.49.2-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.2/stable_windows_10_cmake_Release_x64_graphviz-install-2.49.2-win64.exe">graphviz-2.49.2 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.2/stable_windows_10_cmake_Release_x64_graphviz-install-2.49.2-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.2/stable_windows_10_msbuild_Release_Win32_graphviz-2.49.2-win32.zip">graphviz-2.49.2 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.2/stable_windows_10_msbuild_Release_Win32_graphviz-2.49.2-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        
        <li>Further graphviz-2.49.2 variants available on <a href="https://gitlab.com/graphviz/graphviz/-/packages/3350737">GitLab</a></li>
        
      </ul>
    </li>
    
  
    
    <li>graphviz-2.49.1
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.1/stable_windows_10_cmake_Release_Win32_graphviz-install-2.49.1-win32.exe">graphviz-2.49.1 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.1/stable_windows_10_cmake_Release_Win32_graphviz-install-2.49.1-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.1/stable_windows_10_cmake_Release_x64_graphviz-install-2.49.1-win64.exe">graphviz-2.49.1 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.1/stable_windows_10_cmake_Release_x64_graphviz-install-2.49.1-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.1/stable_windows_10_msbuild_Release_Win32_graphviz-2.49.1-win32.zip">graphviz-2.49.1 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.1/stable_windows_10_msbuild_Release_Win32_graphviz-2.49.1-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        
        <li>Further graphviz-2.49.1 variants available on <a href="https://gitlab.com/graphviz/graphviz/-/packages/3069826">GitLab</a></li>
        
      </ul>
    </li>
    
  
    
    <li>graphviz-2.49.0
      <ul>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.0/stable_windows_10_cmake_Release_Win32_graphviz-install-2.49.0-win32.exe">graphviz-2.49.0 (32-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.0/stable_windows_10_cmake_Release_Win32_graphviz-install-2.49.0-win32.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.0/stable_windows_10_cmake_Release_x64_graphviz-install-2.49.0-win64.exe">graphviz-2.49.0 (64-bit) EXE installer</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.0/stable_windows_10_cmake_Release_x64_graphviz-install-2.49.0-win64.exe.sha256">sha256</a>]</li>
        
        <li>
          <a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.0/stable_windows_10_msbuild_Release_Win32_graphviz-2.49.0-win32.zip">graphviz-2.49.0 (32-bit) ZIP archive</a> [<a href="https://gitlab.com/api/v4/projects/4207231/packages/generic/graphviz-releases/2.49.0/stable_windows_10_msbuild_Release_Win32_graphviz-2.49.0-win32.zip.sha256">sha256</a>] (contains all tools and libraries)</li>
        
        
        <li>Further graphviz-2.49.0 variants available on <a href="https://gitlab.com/graphviz/graphviz/-/packages/2791409">GitLab</a></li>
        
      </ul>
    </li>
    
  
    
  
    
  
    
  
    
  
    
  
    
  
    
  
  </ul>

<ul>
<li><a href="https://www2.graphviz.org/Packages/stable/windows">Prior to 2.46 series</a></li>
</ul>
</li>
<li>
<p>Development Windows install packages</p>
<ul>
<li><a href="https://gitlab.com/graphviz/graphviz/-/packages">2.46.0 and newer</a></li>
<li><a href="https://www2.graphviz.org/Packages/development/windows">Prior to 2.46.0</a></li>
</ul>
</li>
<li>
<p><a href="http://sourceware.org/cygwinports/">Cygwin Ports</a>* provides a port of Graphviz to Cygwin.</p>
</li>
<li>
<p><a href="http://wingraphviz.sourceforge.net/wingraphviz/">WinGraphviz</a>* Win32/COM object (dot/neato library for Visual Basic and ASP).</p>
</li>
<li>
<p><a href="https://chocolatey.org/packages/Graphviz">Chocolatey packages Graphviz for Windows</a>.</p>
<pre tabindex="0"><code>choco install graphviz
</code></pre></li>
<li>
<p><a href="https://docs.microsoft.com/en-gb/windows/package-manager/">Windows Package Manager</a> provides
<a href="https://winget.run/pkg/Graphviz/Graphviz">Graphviz Windows packages</a>.</p>
<pre tabindex="0"><code>winget install graphviz
</code></pre></li>
</ul>


For example, `gcc file_name.c -lpthread` and  `./a.out param1 param2 param3 param4 ... ` 
The double **argv** **character pointer** is used to retrieve the parameters.

