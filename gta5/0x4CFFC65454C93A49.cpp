// fmmc_launcher.ysc @ L569160
void func_8843(var uParam0, int iParam1, bool bParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = func_272(385, iParam1);
  if (bParam2)
  {
    iVar1 = func_269(2153, iParam1);
    iVar2 = func_269(2160, iParam1);
  }
  else
  {
    iVar1 = func_64(2153, iParam1, 0);
    iVar2 = func_64(2160, iParam1, 0);
  }
  Global_77059[1 /*14*/] = { func_380(ENTITY::GET_ENTITY_MODEL(*uParam0), 2, iVar0, -1) };
  PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, 0);
  if (iVar1 == -1)
  {
    iVar1 = func_64(2153, iParam1, 0);
  }
  if (iVar2 == -1)
  {
    iVar2 = func_64(2160, iParam1, 0);
  }
  PED::_SET_PED_HAIR_COLOR(*uParam0, iVar1, iVar2);
}