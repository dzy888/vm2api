// 003e7250 <craggemini_core[66f3c71560d70857]::server::TurnKind>

/* WARNING: Switch with 1 destination removed at 0x003e7284 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::TurnKind> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::TurnKind>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 == -1) ||
     (<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>(param_1[1],param_1[2]),
     lVar1 == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


