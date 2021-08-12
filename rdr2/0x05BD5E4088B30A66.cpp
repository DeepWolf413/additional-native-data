// ambush_inb_forest.ysc @ L24794
void func_889(vector3 vParam0)
{
  float fVar0;
  vector3 vVar1;

  if (!Global_1935630.f_12)
  {
    vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
    fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1f);
    CAM::_0x05BD5E4088B30A66(-180f, 180f);
  }
}