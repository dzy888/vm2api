// 0018d310 <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#5},()>

/* <std[6c98fd8553dbae28]::thread::builder::Builder>::spawn_unchecked::<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#5},
   ()> */

void __rustcall
<std[6c98fd8553dbae28]::thread::builder::Builder>::spawn_unchecked::
<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_5_,()>(void)

{
  undefined8 *in_RSI;
  longlong *in_RDI;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = in_RSI[4];
  local_28 = *(undefined4 *)(in_RSI + 2);
  uStack_24 = *(undefined4 *)((longlong)in_RSI + 0x14);
  uStack_20 = *(undefined4 *)(in_RSI + 3);
  uStack_1c = *(undefined4 *)((longlong)in_RSI + 0x1c);
  std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
  <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_5_,()>
            (&local_48,&local_28,*in_RSI,in_RSI[1],*(undefined1 *)(in_RSI + 5),0);
  if (local_48 != 0) {
    in_RDI[2] = local_38;
  }
  *in_RDI = local_48;
  in_RDI[1] = lStack_40;
  return;
}


