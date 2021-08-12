// ambush_inb_forest.ysc @ L21229
void func_771(vector3 vParam0)
{
  float fVar0;
  float fVar1;
  vector3 vVar2;

  if (!Global_1935630.f_12)
  {
    vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
    fVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar2.x, vVar2.y);
    fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
    ENTITY::SET_ENTITY_HEADING(Global_35, (fVar0 + fVar1));
  }
}