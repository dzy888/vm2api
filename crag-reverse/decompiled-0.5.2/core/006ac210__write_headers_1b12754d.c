// 006ac210 write_headers

/* hyper[c4782d5b5c5e3493]::proto::h1::role::write_headers */

void __rustcall
hyper[c4782d5b5c5e3493]::proto::h1::role::write_headers(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong extraout_RDX;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong unaff_R13;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong local_68;
  ulonglong local_40;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  uVar3 = *(ulonglong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_1 + 0x38);
  cVar7 = (uVar2 == 0) * '\x02';
  local_40 = 0;
  if (uVar2 != 0) goto LAB_006ac280;
LAB_006ac260:
  local_40 = local_40 + 1;
  if (uVar2 <= local_40) {
    return;
  }
  plVar6 = (longlong *)(local_40 * 0x68 + lVar1);
LAB_006ac300:
  cVar7 = '\x02';
  if (*plVar6 == 1) {
    local_68 = plVar6[1];
    cVar7 = '\x01';
  }
  plVar11 = plVar6 + 3;
  if (plVar6[8] == 0) goto LAB_006ac2ea;
LAB_006ac32d:
  uVar12 = plVar6[10];
  do {
    lVar10 = *param_2;
    lVar9 = param_2[2];
    if ((ulonglong)(lVar10 - lVar9) < uVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar9,uVar12,1,1);
      lVar10 = *param_2;
      lVar9 = param_2[2];
LAB_006ac350:
      (*(code *)PTR_memcpy_00799008)();
    }
    else if (uVar12 != 0) goto LAB_006ac350;
    lVar9 = lVar9 + uVar12;
    param_2[2] = lVar9;
    if ((ulonglong)(lVar10 - lVar9) < 2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar9,2,1,1);
      lVar10 = *param_2;
      lVar9 = param_2[2];
    }
    lVar8 = param_2[1];
    *(undefined2 *)(lVar8 + lVar9) = 0x203a;
    lVar9 = lVar9 + 2;
    param_2[2] = lVar9;
    uVar12 = plVar11[2];
    if ((ulonglong)(lVar10 - lVar9) < uVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar9,uVar12,1,1);
      lVar9 = param_2[2];
      lVar10 = *param_2;
      lVar8 = param_2[1];
LAB_006ac3ac:
      (*(code *)PTR_memcpy_00799008)();
    }
    else if (uVar12 != 0) goto LAB_006ac3ac;
    lVar9 = lVar9 + uVar12;
    param_2[2] = lVar9;
    if ((ulonglong)(lVar10 - lVar9) < 2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar9,2,1,1);
      lVar8 = param_2[1];
      lVar9 = param_2[2];
    }
    *(undefined2 *)(lVar8 + lVar9) = 0xa0d;
    param_2[2] = lVar9 + 2;
    unaff_R13 = local_68;
    if (cVar7 == '\x02') goto LAB_006ac260;
LAB_006ac280:
    if (uVar2 <= local_40) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (cVar7,&anon_9036e64db263aa0aa2a972d6d60b9936_30_llvm_9907365231172608471);
LAB_006ac4bc:
      (*(code *)PTR_panic_bounds_check_00799520)();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar6 = (longlong *)(local_40 * 0x68 + lVar1);
    if (cVar7 == '\0') goto LAB_006ac300;
    if (uVar3 <= unaff_R13) goto LAB_006ac4bc;
    lVar10 = lVar4 + unaff_R13 * 0x48;
    cVar7 = '\x02';
    local_68 = unaff_R13;
    if (*(char *)(lVar4 + 0x10 + unaff_R13 * 0x48) != '\0') {
      local_68 = *(ulonglong *)(lVar10 + 0x18);
      cVar7 = '\x01';
    }
    plVar11 = (longlong *)(lVar10 + 0x20);
    if (plVar6[8] != 0) goto LAB_006ac32d;
LAB_006ac2ea:
    <http[56314f485c23ccf6]::header::name::StandardHeader>::as_str((int)plVar6[9]);
    uVar12 = extraout_RDX;
  } while( true );
}


