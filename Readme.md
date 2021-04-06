# Homeworks

-HW1: folder Atlas 1, Hw about Tracks, Clusters and particles.

-HW2: folder Jets, Hw about the Jets. 




# Notas para tener en cuenta luego de la instalación de ROOT

Para el root en notebook, especialmente el de c++, toca descargar el metakernel

python -m pip install metakernel


Para que sirva el PYROOT toca hacer los siguientes comandos


export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig

export PATH=/home/camsdiaz/anaconda3/bin:$PATH

export ROOTSYS=/camsdiaz/local

export PATH=$PATH:$ROOTSYS/bin

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ROOTSYS/lib

export PYTHONPATH=$PYTHONPATH:$ROOTSYS/lib

source $HOME/local/bin/thisroot.sh


estos toca en el archivo .bashrc

para editar eso toca abrirlo de la siguiente forma:    emacs ~/.bashrc

y en este archivo se pega toda esas líneas antes de donde dice : >>> conda initialize >>>

export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig

export PATH=/home/mstorresh/anaconda3/bin:$PATH

export ROOTSYS=/mstorresh/local

export PATH=$PATH:$ROOTSYS/bin

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ROOTSYS/lib

export PYTHONPATH=$PYTHONPATH:$ROOTSYS/lib

source $HOME/Root/root-6.20.04/build/bin/thisroot.sh

source $HOME/repos/spack/share/spack/setup-env.sh



