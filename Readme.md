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

