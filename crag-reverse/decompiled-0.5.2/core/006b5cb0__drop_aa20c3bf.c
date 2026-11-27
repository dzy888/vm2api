// 006b5cb0 drop

/* <http[56314f485c23ccf6]::header::map::Drain<http[56314f485c23ccf6]::header::value::HeaderValue>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<http[56314f485c23ccf6]::header::map::Drain<http[56314f485c23ccf6]::header::value::HeaderValue>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_R14;
  bool bVar9;
  ulonglong local_b0;
  undefined1 local_78 [16];
  char local_68;
  ulonglong local_60;
  longlong local_58;
  
  uVar8 = *param_1;
  uVar7 = param_1[1];
  uVar2 = param_1[3];
  uVar3 = param_1[5];
  uVar4 = param_1[4];
  uVar5 = param_1[6];
  local_b0 = param_1[2];
  do {
    if (uVar8 == 1) {
      http[56314f485c23ccf6]::header::map::remove_extra_value::
      <http[56314f485c23ccf6]::header::value::HeaderValue>(local_78,uVar4,uVar3,uVar5,uVar7);
      if (local_68 != '\0') {
        param_1[1] = local_60;
        uVar7 = local_60;
      }
      else {
      }
      uVar8 = (ulonglong)(local_68 != '\0');
      *param_1 = uVar8;
      unaff_R14 = local_58;
    }
    else {
      if (local_b0 == uVar2) {
        return;
      }
      param_1[2] = local_b0 + 1;
      if (uVar3 <= local_b0) {
        (*(code *)PTR_panic_bounds_check_00799520)();
        (**(code **)(unaff_R14 + 0x20))();
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      uVar7 = local_b0 * 0x68;
      lVar1 = uVar4 + uVar7;
      bVar9 = (*(byte *)(uVar4 + uVar7) & 1) == 0;
      if (!bVar9) {
        uVar7 = *(ulonglong *)(lVar1 + 8);
      }
      uVar8 = (ulonglong)!bVar9;
      *param_1 = uVar8;
      param_1[1] = uVar7;
      lVar6 = *(longlong *)(lVar1 + 0x40);
      unaff_R14 = *(longlong *)(lVar1 + 0x18);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x20))(lVar6,*(undefined8 *)(lVar1 + 0x50));
      }
      local_b0 = local_b0 + 1;
    }
    (**(code **)(unaff_R14 + 0x20))();
  } while( true );
}


