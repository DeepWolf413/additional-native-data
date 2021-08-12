// finale_heist_prepd.ysc @ L18604
void func_356(struct<3> Param0, float fParam3)
{
  iLocal_51 = unk_0x12CE1CDBAD8161A5(7, Param0, 0, 0, 0);
  VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_51, fParam3);
  VEHICLE::SET_TRAIN_SPEED(iLocal_51, fParam3);
  ENTITY::SET_ENTITY_LOD_DIST(iLocal_51, 3000);
  VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_51, 100f);
}