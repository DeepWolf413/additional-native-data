// act_fishing03.ysc @ L21059
int func_593(var uParam0, var uParam1)
{
  vector3 vVar0;
  vector3 vVar3;

  if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam1->f_32[2 /*3*/], true, false))
  {
    return 0;
  }
  if (ENTITY::IS_ENTITY_DEAD(iLocal_28))
  {
    return 0;
  }
  vVar0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_28, 2) };
  vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_28, true, false) };
  ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam1->f_32[2 /*3*/], vVar3, vVar0, 2);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_32[2 /*3*/], "ARTHUR", Global_35, 0);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_32[2 /*3*/], "KIERAN", func_61(uParam0->f_2), 0);
  ANIMSCENE::START_ANIM_SCENE(uParam1->f_32[2 /*3*/]);
  return 1;
}