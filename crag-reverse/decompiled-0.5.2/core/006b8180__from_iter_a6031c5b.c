// 006b8180 from_iter

/* <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<http[56314f485c23ccf6]::header::name::HeaderName,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::str::iter::Split<char>,
   <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers<<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_lower_case::LowercaseWriter>::{closure#1}>>>::from_iter
   <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<http[56314f485c23ccf6]::header::name::HeaderName,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::str::iter::Split<char>,
   <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers<<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter>::{closure#1}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<http[56314f485c23ccf6]::header::name::HeaderName,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::str::iter::Split<char>,<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers<<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_lower_case::LowercaseWriter>::{closure#1}>>>
::from_iter(longlong *param_1,int *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong local_d0;
  undefined8 *puStack_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  auVar7 = <core[c0acaeba6ab4c2e0]::str::iter::Split<char>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
           ::next(param_2);
  puVar2 = PTR_from_bytes_0079a470;
  lVar6 = auVar7._0_8_;
  while( true ) {
    if (lVar6 == 0) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    uVar4 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar7._0_8_,auVar7._8_8_);
    (*(code *)puVar2)();
    if (local_a8 != 1) break;
    auVar7 = <core[c0acaeba6ab4c2e0]::str::iter::Split<char>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
             ::next(param_2,uVar4);
    lVar6 = auVar7._0_8_;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar5 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar5 = CONCAT44(iStack_9c,iStack_a0);
  puVar5[1] = local_98;
  puVar5[2] = uStack_90;
  puVar5[3] = local_88;
  local_d0 = 4;
  local_c0 = 1;
  local_68 = *(undefined8 *)(param_2 + 0x10);
  local_a8 = *param_2;
  iStack_a4 = param_2[1];
  iStack_a0 = param_2[2];
  iStack_9c = param_2[3];
  local_98 = *(undefined8 *)(param_2 + 4);
  uStack_90 = *(undefined8 *)(param_2 + 6);
  local_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined8 *)(param_2 + 10);
  local_78 = *(undefined8 *)(param_2 + 0xc);
  uStack_70 = *(undefined8 *)(param_2 + 0xe);
  lVar6 = 1;
  puStack_c8 = puVar5;
  while( true ) {
    auVar7 = <core[c0acaeba6ab4c2e0]::str::iter::Split<char>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
             ::next(&local_a8);
    if (auVar7._0_8_ == 0) break;
    ::<str>::trim_matches::<<char>::is_whitespace>(auVar7._0_8_,auVar7._8_8_);
    (*(code *)puVar2)();
    uVar3 = local_40;
    uVar4 = local_50;
    if (local_58 != 1) {
      local_b0 = local_48;
      local_b8 = local_38;
      if (lVar6 == local_d0) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_d0,lVar6,1,8,0x20);
        puVar5 = puStack_c8;
      }
      puVar5[lVar6 * 4] = uVar4;
      puVar5[lVar6 * 4 + 1] = local_b0;
      puVar5[lVar6 * 4 + 2] = uVar3;
      puVar5[lVar6 * 4 + 3] = local_b8;
      lVar6 = lVar6 + 1;
      local_c0 = lVar6;
    }
  }
  param_1[2] = local_c0;
  *param_1 = local_d0;
  param_1[1] = (longlong)puStack_c8;
  return param_1;
}


