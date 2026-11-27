// 00635210 call_mut

/* WARNING: Switch with 1 destination removed at 0x00635297 */
/* <&mut 
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::try_for_each::call<&alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::result::Result<(), serde_json[dc3825464c436029]::error::Error>, <&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>> as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq<&alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::{closure#0}>::{closure#0}
   as core[c0acaeba6ab4c2e0]::ops::function::FnMut<((),
   &alloc[12e961f32105355]::string::String)>>::call_mut */

undefined8 * __rustcall
<&mut_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::try_for_each::call<&alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>,<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>as_serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq<&alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<((),&alloc[12e961f32105355]::string::String)>>
::call_mut(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 unaff_R12;
  
  pcVar1 = *(char **)*param_1;
  if (*pcVar1 == '\x01') {
    lVar7 = (*(code *)PTR_panic_00799338)
                      (param_4,&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_79_llvm_10049508496007902178);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    plVar4 = *(longlong **)(pcVar1 + 8);
    if (pcVar1[1] != '\x01') {
      plVar5 = (longlong *)*plVar4;
      lVar7 = plVar5[2];
      if (*plVar5 == lVar7) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar5,lVar7,1,1,1);
        lVar7 = plVar5[2];
      }
      *(undefined1 *)(plVar5[1] + lVar7) = 0x2c;
      plVar5[2] = lVar7 + 1;
    }
    pcVar1[1] = '\x02';
    lVar7 = serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (plVar4,plVar4 + 1,uVar2,uVar3);
    if (lVar7 == 0) {
      return (undefined8 *)0x0;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar8 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  puVar8[4] = 0;
  puVar8[2] = unaff_R12;
  puVar8[3] = 0;
  *puVar8 = 1;
  puVar8[1] = lVar7;
  return puVar8;
}


