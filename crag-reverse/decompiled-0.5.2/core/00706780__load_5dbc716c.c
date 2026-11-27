// 00706780 load

/* <tokio[d7d91d38da47d894]::sync::oneshot::State>::load */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::State>::load(undefined8 *param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  default:
    return *param_1;
  case 1:
    (*(code *)PTR_panic_fmt_007991a8)
              (&switchD_00706793::switchdataD_001b74f4,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_00795160);
    break;
  case 3:
    break;
  }
  (*(code *)PTR_panic_fmt_007991a8)();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


