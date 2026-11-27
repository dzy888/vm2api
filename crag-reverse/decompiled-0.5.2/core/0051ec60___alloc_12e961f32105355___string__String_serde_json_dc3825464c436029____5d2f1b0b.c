// 0051ec60 <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>

/* WARNING: Switch with 1 destination removed at 0x0051ed2c */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut
   bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
          (char *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 unaff_R13;
  undefined4 extraout_XMM0_Da;
  
  if (*param_1 == '\x01') {
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
  if (param_1[1] != '\x01') {
    lVar4 = *(longlong *)(*plVar3 + 8);
    param_2 = &anon_ec7f14c74815bf4c93b295cfd0665412_177_llvm_7806621557641746444;
    (*(code *)PTR_put_slice_00799c88)(param_4,lVar4 != 0x7fffffffffffffff);
    if (lVar4 == 0x7fffffffffffffff) {
      ppuVar6 = &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
      goto LAB_0051ed1e;
    }
  }
  param_1[1] = '\x02';
  ppuVar6 = (undefined **)
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (plVar3,param_2,uVar1,uVar2);
  if (ppuVar6 == (undefined **)0x0) {
    lVar4 = *(longlong *)(*plVar3 + 8);
    (*(code *)PTR_put_slice_00799c88)(extraout_XMM0_Da,lVar4 != 0x7fffffffffffffff);
    if (lVar4 != 0x7fffffffffffffff) {
      <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>::
      serialize::
      <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>>
                (param_3,plVar3);
      return;
    }
    ppuVar6 = &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
  }
LAB_0051ed1e:
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  puVar7[4] = 0;
  puVar7[2] = unaff_R13;
  puVar7[3] = 0;
  *puVar7 = 1;
  puVar7[1] = ppuVar6;
  return;
}


