// 0066b760 <http[56314f485c23ccf6]::header::map::IntoIter<http[56314f485c23ccf6]::header::value::HeaderValue>>

/* WARNING: Switch with 1 destination removed at 0x0066b8fd */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::IntoIter<http[56314f485c23ccf6]::header::value::HeaderValue>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http[56314f485c23ccf6]::header::map::IntoIter<http[56314f485c23ccf6]::header::value::HeaderValue>>
          (ulonglong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  ulonglong local_50;
  
  uVar9 = *param_1;
  local_50 = param_1[1];
  plVar1 = (longlong *)param_1[8];
  uVar2 = param_1[4];
  uVar3 = param_1[3];
  plVar11 = (longlong *)param_1[6];
  do {
    plVar10 = plVar11;
    if (uVar9 == 1) {
      if (uVar2 <= local_50) {
        (*(code *)PTR_panic_bounds_check_00799520)();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar7 = local_50 * 9;
      lVar12 = uVar3 + local_50 * 0x48;
      bVar13 = *(char *)(uVar3 + 0x10 + local_50 * 0x48) != '\0';
      if (bVar13) {
        uVar7 = *(ulonglong *)(lVar12 + 0x18);
      }
      uVar9 = (ulonglong)bVar13;
      *param_1 = uVar9;
      param_1[1] = uVar7;
      lVar8 = *(longlong *)(lVar12 + 0x20);
      lVar12 = *(longlong *)(lVar12 + 0x30);
      local_50 = uVar7;
    }
    else {
      if (plVar11 == plVar1) {
LAB_0066b88e:
        param_1[4] = 0;
        <[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
                  (plVar10,((ulonglong)((longlong)plVar1 - (longlong)plVar10) >> 3) *
                           0x4ec4ec4ec4ec4ec5);
        if (param_1[7] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (param_1[2] == 0) {
          return;
        }
        (*(code *)PTR_free_0079adc8)();
        return;
      }
      plVar10 = plVar11 + 0xd;
      param_1[6] = (ulonglong)plVar10;
      if (*plVar11 == 2) goto LAB_0066b88e;
      local_50 = plVar11[1];
      lVar8 = plVar11[3];
      lVar4 = plVar11[8];
      lVar5 = plVar11[10];
      lVar12 = plVar11[5];
      uVar9 = (ulonglong)((uint)*plVar11 & 1);
      *param_1 = uVar9;
      param_1[1] = local_50;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x20))(param_1,lVar5);
      }
    }
    (**(code **)(lVar8 + 0x20))(lVar8,lVar12);
    plVar11 = plVar10;
  } while( true );
}


