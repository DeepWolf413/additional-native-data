// rcm_monroe11.ysc @ L36784
void func_1228(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_319[0]))
  {
    if (VEHICLE::_0xDDBEA5506C848227(uParam0->f_319[0]))
    {
      func_215(&(uParam0->f_193), 4);
    }
    if (FIRE::IS_ENTITY_ON_FIRE(uParam0->f_319[0]))
    {
      func_215(&(uParam0->f_193), 4);
    }
    if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_319[0]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_319[0], false, false))
    {
      if (!func_79(&(uParam0->f_252)))
      {
        func_80(&(uParam0->f_252), 0);
      }
      else if (func_214(&(uParam0->f_252)) > 3f)
      {
        func_215(&(uParam0->f_193), 4);
      }
    }
    else if (func_79(&(uParam0->f_252)))
    {
      func_216(&(uParam0->f_252));
    }
  }
}