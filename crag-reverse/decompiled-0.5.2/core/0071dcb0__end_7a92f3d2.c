// 0071dcb0 end

/* <serde_json[dc3825464c436029]::value::ser::SerializeMap as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::end */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::end(undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  undefined4 uStack_27;
  undefined4 uStack_23;
  
  lVar1 = *param_2;
  if (lVar1 == -2) {
    (*(code *)PTR_panic_00799338)
              (param_4,&
                       PTR_anon_63b06cc94833867f683611f039574387_74_llvm_6903579140370050947_00795bd8
              );
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = param_2[5];
  lVar4 = param_2[3];
  lVar5 = param_2[4];
  uStack_2b._3_1_ = (undefined1)lVar4;
  uStack_27 = (undefined4)((ulonglong)lVar4 >> 8);
  uStack_23._0_3_ = (undefined3)((ulonglong)lVar4 >> 0x28);
  uStack_23._3_1_ = (undefined1)lVar5;
  *param_1 = 5;
  *(undefined4 *)(param_1 + 1) = uStack_2f;
  *(undefined4 *)(param_1 + 5) = uStack_2b;
  *(undefined4 *)(param_1 + 9) = uStack_27;
  *(undefined4 *)(param_1 + 0xd) = uStack_23;
  *(longlong *)(param_1 + 0x10) = lVar5;
  *(longlong *)(param_1 + 0x18) = lVar2;
  if (0 < lVar1) {
    (*(code *)PTR___rust_dealloc_00798fc8)(lVar2,1);
  }
  return param_1;
}


