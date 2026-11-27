// 003b7840 from_iter

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>
   as 
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::string::String>,
   <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::{closure#0}::{closure#2}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::string::String>,<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::{closure#0}::{closure#2}>>>
::from_iter(undefined4 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 *puStack_5d0;
  longlong local_5c8;
  undefined4 *puStack_5c0;
  longlong *local_5b8;
  longlong local_5a8;
  longlong lStack_5a0;
  longlong local_598;
  longlong local_590;
  longlong local_588;
  longlong *local_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 local_568;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 local_548;
  longlong local_540 [5];
  longlong local_518;
  int local_2a0;
  
  puVar8 = *(undefined4 **)(param_3 + 2);
  puVar1 = *(undefined4 **)(param_3 + 6);
  local_580 = param_2;
  if (puVar8 != puVar1) {
    plVar2 = *(longlong **)(param_3 + 8);
    do {
      local_5c8 = *(longlong *)(puVar8 + 4);
      local_5d8 = *puVar8;
      uStack_5d4 = puVar8[1];
      puStack_5d0 = *(undefined4 **)(puVar8 + 2);
      puVar8 = puVar8 + 6;
      *(undefined4 **)(param_3 + 2) = puVar8;
      param_1 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,std[6c98fd8553dbae28]::hash::random::RandomState>>
                ::remove::<alloc[12e961f32105355]::string::String>(local_540,*plVar2 + 8,&local_5d8)
      ;
      lVar6 = local_518;
      if (local_2a0 == -1) {
        lVar6 = -1;
        lVar4 = CONCAT44(uStack_5d4,local_5d8);
      }
      else {
        param_1 = (*(code *)PTR_memcpy_00799008)(param_1,0x268);
        lVar4 = CONCAT44(uStack_5d4,local_5d8);
      }
      if (lVar4 != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if (lVar6 != -1) {
        (*(code *)PTR_memcpy_00799008)(param_1,0x268);
        local_540[0] = lVar6;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar6 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar6 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x270);
        local_5a8 = 4;
        local_598 = 1;
        uVar10 = *param_3;
        uStack_5d4 = param_3[1];
        puStack_5d0 = *(undefined4 **)(param_3 + 2);
        local_5c8 = *(longlong *)(param_3 + 4);
        puVar8 = *(undefined4 **)(param_3 + 6);
        plVar2 = *(longlong **)(param_3 + 8);
        local_5d8 = uVar10;
        puStack_5c0 = puVar8;
        local_5b8 = plVar2;
        lStack_5a0 = lVar6;
        if (puStack_5d0 != puVar8) {
          local_588 = 1;
          puVar1 = puStack_5d0;
          local_590 = lVar6;
          do {
            puVar7 = puVar1;
            local_568 = *(undefined8 *)(puVar7 + 4);
            local_578 = *puVar7;
            uStack_574 = puVar7[1];
            uStack_570 = puVar7[2];
            uStack_56c = puVar7[3];
            local_558 = local_578;
            uStack_554 = uStack_574;
            uStack_550 = uStack_570;
            uStack_54c = uStack_56c;
            local_548 = local_568;
            uVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::remove::<alloc[12e961f32105355]::string::String>
                               (local_540,*plVar2 + 8,&local_578);
            lVar6 = local_518;
            if (local_2a0 == -1) {
              lVar6 = -1;
              lVar4 = CONCAT44(uStack_574,local_578);
            }
            else {
              uVar10 = (*(code *)PTR_memcpy_00799008)(uVar10,0x268);
              lVar4 = CONCAT44(uStack_574,local_578);
            }
            if (lVar4 != 0) {
              uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
            }
            if (lVar6 != -1) {
              uVar10 = (*(code *)PTR_memcpy_00799008)(uVar10,0x268);
              lVar4 = local_588;
              local_540[0] = lVar6;
              if (local_588 == local_5a8) {
                uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (&local_5a8,local_588,1,8,0x270);
                local_590 = lStack_5a0;
              }
              uVar10 = (*(code *)PTR_memcpy_00799008)(uVar10,0x270);
              local_598 = lVar4 + 1;
              local_588 = local_598;
            }
            puVar1 = puVar7 + 6;
          } while (puVar7 + 6 != puVar8);
          puStack_5d0 = puVar7 + 6;
        }
        plVar2 = local_580;
        if (puVar8 != puStack_5d0) {
          uVar9 = (ulonglong)((longlong)puVar8 - (longlong)puStack_5d0) / 0x18;
          puVar8 = puStack_5d0 + 2;
          do {
            if (*(longlong *)(puVar8 + -2) != 0) {
              uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
            }
            puVar8 = puVar8 + 6;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (local_5c8 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,8);
        }
        plVar2[2] = local_598;
        *plVar2 = local_5a8;
        plVar2[1] = lStack_5a0;
        return plVar2;
      }
    } while (puVar8 != puVar1);
  }
  plVar2 = local_580;
  *local_580 = 0;
  local_580[1] = 8;
  local_580[2] = 0;
  puVar5 = PTR___rust_dealloc_00798fc8;
  if (puVar1 != puVar8) {
    uVar9 = (ulonglong)((longlong)puVar1 - (longlong)puVar8) / 0x18;
    puVar8 = puVar8 + 2;
    do {
      if (*(longlong *)(puVar8 + -2) != 0) {
        param_1 = (*(code *)puVar5)(param_1,1);
      }
      puVar8 = puVar8 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (*(longlong *)(param_3 + 4) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  return plVar2;
}


