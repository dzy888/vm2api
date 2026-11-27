// 0040ece0 <core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x0040edb2 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>,serde_json[dc3825464c436029]::error::Error>>
          (ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  puVar5 = PTR___rust_dealloc_00798fc8;
  uVar1 = *param_1;
  if (uVar1 == 0xffffffffffffffff) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  uVar2 = param_1[3];
  if (uVar2 != 0) {
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar6 = uVar1;
    if (uVar4 < uVar1) {
      uVar6 = 0;
    }
    lVar8 = uVar4 - uVar6;
    uVar9 = uVar1 - lVar8;
    lVar10 = uVar2 - uVar9;
    bVar12 = lVar10 != 0;
    if (uVar2 < uVar9) {
      lVar10 = 0;
    }
    uVar7 = lVar8 + uVar2;
    if (uVar2 >= uVar9 && bVar12) {
      uVar7 = uVar1;
    }
    lVar8 = uVar7 - lVar8;
    if (lVar8 != 0) {
      lVar11 = uVar4 * 0x18 + uVar6 * -0x18 + uVar3 + 8;
      do {
        if (*(longlong *)(lVar11 + -8) != 0) {
          (*(code *)puVar5)();
        }
        lVar11 = lVar11 + 0x18;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar5 = PTR___rust_dealloc_00798fc8;
    if (uVar9 < uVar2) {
      lVar8 = uVar3 + 8;
      do {
        if (*(longlong *)(lVar8 + -8) != 0) {
          (*(code *)puVar5)();
        }
        lVar8 = lVar8 + 0x18;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  if (uVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


