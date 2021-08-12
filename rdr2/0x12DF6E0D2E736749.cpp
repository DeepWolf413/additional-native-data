// marston5_1.ysc @ L64098
void func_1675()
{
  vector3 vVar0;
  vector3 vVar3;

  if (((!ENTITY::IS_ENTITY_DEAD(iLocal_19[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_19[5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_19[3])) && !ENTITY::IS_ENTITY_DEAD(iLocal_19.f_15[0]))
  {
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_19.f_15[0], true);
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_17[2]) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_19.f_17[2]))
    {
      ENTITY::DETACH_ENTITY(iLocal_19.f_17[2], false, true);
    }
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_17[3]) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_19.f_17[3]))
    {
      ENTITY::DETACH_ENTITY(iLocal_19.f_17[3], false, true);
    }
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_17[4]) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_19.f_17[4]))
    {
      ENTITY::DETACH_ENTITY(iLocal_19.f_17[4], false, true);
    }
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_19.f_17[5]) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_19.f_17[5]))
    {
      ENTITY::DETACH_ENTITY(iLocal_19.f_17[5], false, true);
    }
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_19.f_15[0], true, false) };
    vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_19.f_15[0], 2) };
    ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_19.f_83[0], vVar0, vVar3, 2);
    ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(iLocal_19.f_83[0], iLocal_19.f_15[0], -1);
  }
  func_1677(iLocal_19.f_83[0], func_422(0), func_420(0));
  func_1729(iLocal_19.f_83[0], func_420(0));
  func_1676(&(iLocal_19.f_83[0]), "bPlayLeadin", 0, func_420(0));
}