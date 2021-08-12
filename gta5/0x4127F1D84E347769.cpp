// gb_gunrunning_delivery.ysc @ L119438
void func_1257(var uParam0)
{
  struct<3> Var0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
  {
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], uParam0->f_65[0 /*3*/], false, false, true);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], uParam0->f_65[1 /*3*/].f_2);
    Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 1.8f, -3.5f) };
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[1], Var0, false, false, true);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_28[1], ENTITY::GET_ENTITY_HEADING(uParam0->f_28[0]));
    VEHICLE::ATTACH_VEHICLE_TO_CARGOBOB(uParam0->f_28[0], uParam0->f_28[1], -1, 0f, 0f, -6f);
  }
}