// abigail2_1_intro.ysc @ L10424
void func_471(var uParam0, int iParam1, char* sParam2)
{
  if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
  {
    return;
  }
  if (!func_387(uParam0, iParam1))
  {
    return;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
  {
    sParam2 = func_581(uParam0, iParam1);
  }
  if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, sParam2))
  {
    if (((ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false))))
    {
      ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, iParam1);
    }
  }
}