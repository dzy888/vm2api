// 0072fd20 <core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::line::Lines,gimli[a7f20a324fd82d99]::read::Error>>

/* WARNING: Switch with 1 destination removed at 0x0072fe13 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::line::Lines,
   gimli[a7f20a324fd82d99]::read::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::line::Lines,gimli[a7f20a324fd82d99]::read::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (*param_1 != 0) {
    lVar3 = param_1[1];
    if (lVar3 != 0) {
      lVar2 = *param_1 + 8;
      do {
        if (*(longlong *)(lVar2 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      plVar4 = (longlong *)(param_1[2] + 8);
      do {
        if (*plVar4 != 0) {
          (*(code *)puVar1)(param_4,8);
        }
        plVar4 = plVar4 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


