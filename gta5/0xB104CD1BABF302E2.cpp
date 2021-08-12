// agency_heist3a.ysc @ L131535
void func_980()
{
  struct<3> Var0;
  float fVar3;
  struct<3> Var4;
  struct<3> Var7;
  
  if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_82, 131.066f, -781.433f, 41.656f, 161.13f, -698.834f, 55.056f, 147.8f, false, true, 0))
  {
    MISC::CLEAR_AREA(42.5287f, -782.1006f, 43.1106f, 10f, true, false, false, false);
    ENTITY::SET_ENTITY_COORDS(Local_82, 42.5287f, -782.1006f, 43.1106f, true, false, false, true);
    ENTITY::SET_ENTITY_HEADING(Local_82, 340.2707f);
  }
  else if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_82) || ENTITY::GET_ENTITY_SPEED(Local_82) > 1f)
  {
    if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(Local_82, true), &Var0, &fVar3, 12, 3f, 0))
    {
      MISC::CLEAR_AREA(Var0, 10f, true, false, false, false);
      ENTITY::SET_ENTITY_COORDS(Local_82, Var0, true, false, false, true);
      Var4 = { -SYSTEM::SIN(fVar3), SYSTEM::COS(fVar3), 0f };
      Var7 = { Vector(43.2027f, -743.6381f, 56.7573f) - Var0 };
      if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var4.x, Var4.f_1, Var7.x, Var7.f_1) > 90f)
      {
        ENTITY::SET_ENTITY_HEADING(Local_82, (fVar3 + 180f));
      }
      else
      {
        ENTITY::SET_ENTITY_HEADING(Local_82, fVar3);
      }
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_82, 5f);
    }
  }
}