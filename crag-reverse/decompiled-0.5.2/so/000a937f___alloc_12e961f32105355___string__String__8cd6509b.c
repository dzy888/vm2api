// 000a937f <alloc[12e961f32105355]::string::String>

/* WARNING: Switch with 1 destination removed at 0x000a9396 */
/* WARNING: Switch with 1 destination removed at 0x000a9f0b */
/* WARNING: Switch with 1 destination removed at 0x000aab00 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::string::String> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::string::String>(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong unaff_R14;
  longlong alStack_418 [128];
  
  (*(code *)PTR_drop_000c45b8)();
  plVar1 = alStack_418 + 0x81;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    unaff_R14 = 1;
    plVar1 = alStack_418 + 0x82;
  }
  *plVar1 = lVar2;
  if ((unaff_R14 == 0) || (unaff_RBP == 0)) {
    return;
  }
  (*(code *)PTR_free_000c4290)();
  return;
}


