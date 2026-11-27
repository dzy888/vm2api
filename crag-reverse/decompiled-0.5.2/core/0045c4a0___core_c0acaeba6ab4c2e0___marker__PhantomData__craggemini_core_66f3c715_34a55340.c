// 0045c4a0 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>
   as 
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::license::Term
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined1 local_29;
  undefined8 local_28;
  short *local_20;
  longlong local_18;
  
  uVar1 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  if (uVar2 < uVar1) {
    do {
      uVar2 = uVar2 + 1;
      uVar5 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar2);
      if (0x22 < uVar5) {
LAB_0045c5c7:
        uVar3 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_invalid_type(param_2,&local_29,
                                    anon_877a5ac8abb067e0da128e2a3fb4e8ff_309_llvm_12784291601945948760
                                   );
LAB_0045c598:
        local_20 = (short *)::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                            <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                                      (uVar3,param_2);
        goto LAB_0045c5a3;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x22) goto LAB_0045c5c7;
        *(ulonglong *)(param_2 + 0x28) = uVar2;
        *(undefined8 *)(param_2 + 0x10) = 0;
        (*(code *)PTR_parse_str_007998f8)(-uVar1,param_2);
        if ((int)local_28 != 2) {
          if (local_18 == 2) {
            if (*local_20 == anon_ec7f14c74815bf4c93b295cfd0665412_123_llvm_7806621557641746444) {
              uVar4 = 0;
LAB_0045c5b6:
              *param_1 = uVar4;
              *(longlong *)(param_1 + 8) = param_2;
              return param_1;
            }
            if (*local_20 == anon_ec7f14c74815bf4c93b295cfd0665412_124_llvm_7806621557641746444) {
              uVar4 = 1;
              goto LAB_0045c5b6;
            }
            if (*local_20 == anon_ec7f14c74815bf4c93b295cfd0665412_125_llvm_7806621557641746444) {
              uVar4 = 2;
              goto LAB_0045c5b6;
            }
            uVar4 = 3;
            if (*local_20 == anon_ec7f14c74815bf4c93b295cfd0665412_126_llvm_7806621557641746444)
            goto LAB_0045c5b6;
          }
          uVar3 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::unknown_variant(local_20,local_18,
                                    &
                                    anon_ec7f14c74815bf4c93b295cfd0665412_157_llvm_7806621557641746444
                                    ,4);
          goto LAB_0045c598;
        }
        goto LAB_0045c5a3;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2;
    } while (uVar2 != uVar1);
  }
  local_28 = 5;
  local_20 = (short *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(param_2,&local_28);
LAB_0045c5a3:
  *(short **)(param_1 + 8) = local_20;
  *param_1 = 0xff;
  return param_1;
}


