// av_butcher_shared.ysc @ L3073
void func_75(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  vector3 vVar4;
  vector3 vVar7;

  ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_372[0 /*8*/], true);
  iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_20[1 /*14*/], 53081);
  iVar1 = PED::GET_PED_BONE_INDEX(uParam0->f_20[1 /*14*/], 41273);
  iVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_372[0 /*8*/], "bottomHookInd02");
  iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_372[0 /*8*/], "bottomHookInd01");
  if (((iVar0 == -1 || iVar1 == -1) || iVar2 == -1) || iVar3 == -1)
  {
    ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20[1 /*14*/], true);
    return;
  }
  vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_372[0 /*8*/], iVar2) };
  vVar7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_372[0 /*8*/], iVar3) };
  PED::SET_PED_TO_RAGDOLL(uParam0->f_20[1 /*14*/], 10000, 15000, 0, false, true, false);
  PED::_0xE1AADD0055D76603(uParam0->f_20[1 /*14*/], uParam0->f_372[0 /*8*/], iVar0, iVar2, vVar4, -1f, 0, 0, 0);
  PED::_0xE1AADD0055D76603(uParam0->f_20[1 /*14*/], uParam0->f_372[0 /*8*/], iVar1, iVar3, vVar7, -1f, 0, 0, 0);
}