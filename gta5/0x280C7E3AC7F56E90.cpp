// fm_deathmatch_creator.ysc @ L268900
void func_2608(int iParam0)
{
  int iVar0;
  var uVar1;
  var uVar2;
  var uVar3;
  
  iVar0 = 0;
  while (iVar0 <= iParam0)
  {
    PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar0, &uVar1, &uVar2, &uVar3);
    Local_365[iVar0 /*3*/] = uVar1;
    Local_365[iVar0 /*3*/].f_1 = uVar2;
    Local_365[iVar0 /*3*/].f_2 = uVar3;
    iVar0++;
  }
}