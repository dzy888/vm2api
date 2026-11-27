// 005d85e0 load_sqlite3_api

/* craggemini_core[66f3c71560d70857]::acp_backend::load_sqlite3_api */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::load_sqlite3_api(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = (*(code *)PTR_dlopen_0079a048)();
  if (((((lVar1 == 0) && (lVar1 = (*(code *)PTR_dlopen_0079a048)(), lVar1 == 0)) ||
       (lVar1 = (*(code *)PTR_dlsym_0079a050)(), lVar1 == 0)) ||
      ((((lVar2 = (*(code *)PTR_dlsym_0079a050)(), lVar2 == 0 ||
         (lVar3 = (*(code *)PTR_dlsym_0079a050)(), lVar3 == 0)) ||
        ((lVar4 = (*(code *)PTR_dlsym_0079a050)(), lVar4 == 0 ||
         ((lVar5 = (*(code *)PTR_dlsym_0079a050)(), lVar5 == 0 ||
          (lVar6 = (*(code *)PTR_dlsym_0079a050)(), lVar6 == 0)))))) ||
       (lVar7 = (*(code *)PTR_dlsym_0079a050)(), lVar7 == 0)))) ||
     (((lVar8 = (*(code *)PTR_dlsym_0079a050)(), lVar8 == 0 ||
       (lVar9 = (*(code *)PTR_dlsym_0079a050)(), lVar9 == 0)) ||
      (lVar10 = (*(code *)PTR_dlsym_0079a050)(), lVar10 == 0)))) {
    *param_1 = 0;
    return param_1;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  param_1[4] = lVar5;
  param_1[5] = lVar6;
  param_1[6] = lVar7;
  param_1[7] = lVar8;
  param_1[8] = lVar9;
  param_1[9] = lVar10;
  return param_1;
}


