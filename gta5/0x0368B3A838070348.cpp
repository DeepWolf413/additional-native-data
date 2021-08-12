// act_cinema.ysc @ L7135
var func_153(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
  iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
  iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
  bVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
  iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
  iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
  iVar6 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
  if (((((((bVar3 != Global_77220 || iParam1 != Global_77221) || iVar4 != Global_77222) || iVar5 != Global_77223) || iVar6 != Global_77224) || iVar0 != Global_77225) || iVar1 != Global_77226) || iVar2 != Global_77227)
  {
    Global_77220 = bVar3;
    Global_77221 = iParam1;
    Global_77222 = iVar4;
    Global_77223 = iVar5;
    Global_77224 = iVar6;
    Global_77225 = iVar0;
    Global_77226 = iVar1;
    Global_77227 = iVar2;
    Global_77228 = func_154(iParam0, iParam1);
  }
  return Global_77228;
}