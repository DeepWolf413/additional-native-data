// beat_on_the_run.ysc @ L3608
void func_87()
{
  vector3 vVar0;

  if (func_18(536870912))
  {
    if (func_103(&uLocal_830, 1f) && !VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_776, PED::GET_PED_BONE_COORDS(iLocal_324[0], 14285, 0f, 0f, 0f)))
    {
      func_299(536870912);
      func_89(1073741824 /* Float: 2f */);
      func_120(&uLocal_830);
    }
    vVar0 = { Vector(160.0282f, -448.4064f, -1824.692f) - Vector(159.665f, -450.131f, -1825.672f) };
    ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_324[0], 0, vVar0 * Vector(3f, 3f, 3f), 0f, 0f, 0f, PED::_0xC5303F460A40D21D(iLocal_324[0], 14283), false, false, true, false, true);
    ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_324[0], 0, vVar0 * Vector(3f, 3f, 3f), 0f, 0f, 0f, PED::_0xC5303F460A40D21D(iLocal_324[0], 0), false, false, true, false, true);
  }
  else if (!func_18(1073741824 /* Float: 2f */))
  {
    if (ENTITY::IS_ENTITY_DEAD(iLocal_324[0]))
    {
      if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_324[0], iLocal_775, false, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_324[1]))
      {
        func_111(&uLocal_830);
        func_89(536870912);
      }
    }
  }
}