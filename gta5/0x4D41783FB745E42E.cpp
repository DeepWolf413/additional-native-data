// agency_heist3a.ysc @ L104369
void func_548()
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  
  fVar6 = ((Local_5020.f_2 - fLocal_7300) / (fLocal_7299 - fLocal_7300));
  Var0 = { Local_7287 + Local_7281 - Local_7287 * Vector(fVar6, fVar6, fVar6) };
  Var3 = { Local_7290 + Local_7284 - Local_7290 * Vector(fVar6, fVar6, fVar6) };
  Local_7293 = { Local_7293 + Var0 - Local_7293 * Vector(0.2f, 0.2f, 0.2f) };
  Local_7296 = { Local_7296 + Var3 - Local_7296 * Vector(0.2f, 0.2f, 0.2f) };
  CAM::SET_CAM_COORD(iLocal_5063, Local_7293);
  CAM::SET_CAM_ROT(iLocal_5063, Local_7296, 2);
  CAM::_0x661B5C8654ADD825(iLocal_5063, true);
}