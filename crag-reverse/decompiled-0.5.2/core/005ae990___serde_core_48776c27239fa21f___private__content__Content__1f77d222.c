// 005ae990 <serde_core[48776c27239fa21f]::private::content::Content>

/* WARNING: Switch with 1 destination removed at 0x005aeaa8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
          (undefined1 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x12:
    goto switchD_005ae9b5_caseD_0;
  case 0xc:
  case 0xe:
    lVar2 = *(longlong *)(param_1 + 8);
    break;
  case 0x11:
    <serde_core[48776c27239fa21f]::private::content::Content>(*(undefined8 *)(param_1 + 8));
    goto LAB_005aea9a;
  case 0x13:
    <serde_core[48776c27239fa21f]::private::content::Content>(*(undefined8 *)(param_1 + 8));
    goto LAB_005aea9a;
  case 0x14:
    lVar2 = *(longlong *)(param_1 + 0x10);
    for (lVar3 = *(longlong *)(param_1 + 0x18) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      <serde_core[48776c27239fa21f]::private::content::Content>(lVar2);
      lVar2 = lVar2 + 0x20;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    break;
  default:
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    while (bVar4 = lVar3 != 0, lVar3 = lVar3 + -1, bVar4) {
      <serde_core[48776c27239fa21f]::private::content::Content>(lVar2);
      lVar1 = lVar2 + 0x20;
      lVar2 = lVar2 + 0x40;
      <serde_core[48776c27239fa21f]::private::content::Content>(lVar1);
    }
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 == 0) {
switchD_005ae9b5_caseD_0:
    return;
  }
LAB_005aea9a:
  (*(code *)PTR_free_0079adc8)();
  return;
}


