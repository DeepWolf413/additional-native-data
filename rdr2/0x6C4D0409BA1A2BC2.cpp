// discoverable_alchemist_house.ysc @ L2909
bool func_46(var uParam0)
{
  struct<7> Var0;
  vector3 vVar7;

  if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
  {
    func_95(*uParam0, &Var0);
    if (FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, Var0, Var0.f_3, Var0.f_6) == func_96(Global_35))
    {
      return true;
    }
    else if (MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, true))
    {
      vVar7 = { 0f, 0f, 0f };
      if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(Global_35, &vVar7))
      {
        if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar7, Var0, Var0.f_3, Var0.f_6, false, true))
        {
          return true;
        }
      }
    }
  }
  return false;
}