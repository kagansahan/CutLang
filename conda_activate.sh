export CUTLANG_PATH=$CONDA_PREFIX/bin/cutlang
export PATH=$CUTLANG_PATH/runs:$PATH

mkdir -p $(jupyter --data-dir)/kernels/cutlang

cp $CUTLANG_PATH/kernel/kernel.json $(jupyter --data-dir)/kernels/cutlang/kernel.json

cp $CUTLANG_PATH/kernel/magics/cutlangmagic.py $ROOTSYS/lib/JupyROOT/kernel/magics/cutlangmagic.py 2>>/dev/null
cp $CUTLANG_PATH/kernel/magics/cutlangmagic.py $ROOTSYS/lib/python3.9/site-packages/JupyROOT/kernel/magics/cutlangmagic.py 2>>/dev/null

cp $CUTLANG_PATH/kernel/cutlangmagic.py $ROOTSYS/lib/JupyROOT/magics/cutlangmagic.py 2>>/dev/null
cp $CUTLANG_PATH/kernel/cutlangmagic.py $ROOTSYS/lib/python3.9/site-packages/JupyROOT/magics/cutlangmagic.py 2>>/dev/null

echo "For examples see $CUTLANG_PATH/runs/"
echo "and for LHC analysis implementations, see"
echo "https://github.com/ADL4HEP/ADLLHCanalyses"