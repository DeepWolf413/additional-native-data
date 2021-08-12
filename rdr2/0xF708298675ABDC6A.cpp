// beat_animal_mauling.ysc @ L3863
void func_102()
{
  vector3 vVar0;

  if (!bLocal_680)
  {
    vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_693[0], -0.2f, -0.2f, 1f) };
    MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
    GRAPHICS::_ADD_BLOOD_POOL_2(vVar0, 0.5f, 1.25f, 0.01f, true, NaNf, false);
    bLocal_680 = true;
  }
}