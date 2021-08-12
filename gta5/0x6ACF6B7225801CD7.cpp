// finalec2.ysc @ L121757
void func_877(int iParam0, bool bParam1)
{
  *iParam0 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_606[3]))
  {
    PED::SET_SYNCHRONIZED_SCENE_ORIGIN(*iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2);
    PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(*iParam0, iLocal_606[3], -1);
  }
  else
  {
    PED::SET_SYNCHRONIZED_SCENE_ORIGIN(*iParam0, func_281(18), 0f, 0f, 0f, 2);
  }
  PED::SET_SYNCHRONIZED_SCENE_LOOPED(*iParam0, bParam1);
}