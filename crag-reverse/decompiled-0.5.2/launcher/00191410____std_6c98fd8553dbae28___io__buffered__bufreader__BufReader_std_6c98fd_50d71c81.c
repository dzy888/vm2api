// 00191410 <<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinLock>as_std[6c98fd8553dbae28]::io::BufRead>::read_line::{closure#0}>

/* WARNING: Removing unreachable block (ram,0x001915ca) */
/* WARNING: Removing unreachable block (ram,0x001915b6) */
/* std[6c98fd8553dbae28]::io::append_to_string::<<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinLock>
   as std[6c98fd8553dbae28]::io::BufRead>::read_line::{closure#0}> */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::io::append_to_string::
<<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinLock>as_std[6c98fd8553dbae28]::io::BufRead>::read_line::_closure_0_>
          (longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong local_50;
  ulonglong local_40;
  
  puVar4 = PTR_read_buf_0021a250;
  ppuVar9 = (undefined **)0x0;
LAB_0019146b:
  while( true ) {
    lVar10 = *param_2;
    uVar7 = param_2[2];
    local_40 = param_2[3];
    if (local_40 <= uVar7) break;
LAB_001914d7:
    ppuVar6 = (undefined **)(local_40 - uVar7);
    if (lVar10 == 0) {
      switch((uint)ppuVar6 & 3) {
      case 1:
        goto switchD_001914d3_caseD_1;
      case 2:
        goto switchD_001914d3_caseD_2;
      case 3:
        goto switchD_001914d3_caseD_3;
      }
switchD_001914d3_caseD_0:
      if (*(char *)(ppuVar6 + 2) != '#') goto LAB_00191671;
    }
    else {
      if (ppuVar6 < (undefined **)0x10) {
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar8 = (undefined **)0x0;
          do {
            if (*(char *)(lVar10 + uVar7 + (longlong)ppuVar8) == '\n') goto LAB_001916e2;
            ppuVar8 = (undefined **)((longlong)ppuVar8 + 1);
          } while ((undefined **)(local_40 - uVar7) != ppuVar8);
        }
      }
      else {
        ppuVar8 = ppuVar6;
        lVar10 = (*(code *)PTR_memchr_aligned_00219d40)();
        if (lVar10 == 1) {
LAB_001916e2:
          if (ppuVar6 <= ppuVar8) {
            (*(code *)PTR_slice_index_fail_00219d80)
                      (&
                       PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_00215f10
                       ,ppuVar6);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar10 = (longlong)ppuVar8 + 1;
          if ((undefined **)(*param_1 - param_1[2]) <= ppuVar8) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(param_1,param_1[2],lVar10,1,1);
          }
          (*(code *)PTR_memcpy_00219c60)();
          param_1[2] = param_1[2] + lVar10;
          uVar7 = param_2[2] + lVar10;
          if ((ulonglong)param_2[3] < (ulonglong)(param_2[2] + lVar10)) {
            uVar7 = param_2[3];
          }
          param_2[2] = uVar7;
          ppuVar6 = (undefined **)((longlong)ppuVar9 + lVar10);
          goto LAB_0019173e;
        }
      }
      lVar10 = param_1[2];
      if ((undefined **)(*param_1 - lVar10) < ppuVar6) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar10,ppuVar6,1,1);
LAB_001915e9:
        (*(code *)PTR_memcpy_00219c60)();
        lVar10 = param_1[2];
        bVar2 = false;
      }
      else {
        if (ppuVar6 != (undefined **)0x0) goto LAB_001915e9;
        bVar2 = true;
      }
      uVar7 = param_2[2] + (longlong)ppuVar6;
      if ((ulonglong)param_2[3] < (ulonglong)(param_2[2] + (longlong)ppuVar6)) {
        uVar7 = param_2[3];
      }
      param_1[2] = lVar10 + (longlong)ppuVar6;
      param_2[2] = uVar7;
      ppuVar6 = (undefined **)((longlong)ppuVar9 + (longlong)ppuVar6);
      ppuVar9 = ppuVar6;
      if (bVar2) {
LAB_0019173e:
        lVar10 = 0;
LAB_00191677:
        (*(code *)PTR_from_utf8_00219d78)();
        if ((char)local_50 != '\0') {
          if (lVar10 == 0) {
            ppuVar6 = &PTR_s_stream_did_not_contain_valid_UTF_00215f28;
          }
          lVar10 = 1;
        }
        (*(code *)PTR_drop_0021a248)();
        auVar11._8_8_ = ppuVar6;
        auVar11._0_8_ = lVar10;
        return auVar11;
      }
    }
  }
  local_40 = 0;
  lVar3 = param_2[4];
  ppuVar6 = (undefined **)(*(code *)puVar4)();
  param_2[2] = 0;
  param_2[3] = 0;
  *(char *)(param_2 + 4) = (char)lVar3;
  local_50 = lVar10;
  if (ppuVar6 == (undefined **)0x0) {
    uVar7 = 0;
    goto LAB_001914d7;
  }
  switch((uint)ppuVar6 & 3) {
  case 0:
    goto switchD_001914d3_caseD_0;
  case 1:
switchD_001914d3_caseD_1:
    if (*(char *)((longlong)ppuVar6 + 0x1f) == '#') {
      local_50 = 3;
      (*(code *)PTR_drop_00219c58)();
      goto LAB_0019146b;
    }
    break;
  case 2:
switchD_001914d3_caseD_2:
    lVar10 = (*(code *)PTR_get_os_functions_0021a0e8)();
    cVar5 = (**(code **)(lVar10 + 0x10))();
    if (cVar5 != '\0') goto LAB_0019146b;
    break;
  case 3:
switchD_001914d3_caseD_3:
    cVar5 = (char)((ulonglong)ppuVar6 >> 0x20);
    if (0x2a < (ulonglong)ppuVar6 >> 0x20) {
      cVar5 = -1;
    }
    if (cVar5 == '#') goto LAB_0019146b;
  }
LAB_00191671:
  lVar10 = 1;
  goto LAB_00191677;
}


