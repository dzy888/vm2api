// 001fecb0 new

/* <gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>::new */

undefined8 * __rustcall
<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>::new
          (undefined8 *param_1,longlong param_2,undefined2 param_3,undefined1 param_4,
          undefined8 *param_5)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    (*(code *)PTR_<u64,u64>_0021ab40)
              (0,&DAT_00114318,param_5,&PTR_s__rust_deps_gimli_0_32_3_src_read_00218498);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1[0xc] = param_2;
  *(undefined2 *)(param_1 + 0xd) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x6a) = param_4;
  puVar3 = param_1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_5;
    param_5 = param_5 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


