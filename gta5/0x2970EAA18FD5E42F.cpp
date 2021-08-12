// fm_deathmatch_controler.ysc @ L318358
void func_4619(var uParam0)
{
  int iVar0;
  
  iVar0 = 1000;
  ENTITY::SET_ENTITY_HEALTH(uParam0->f_22.f_26, iVar0, 0);
  VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_22.f_26, SYSTEM::TO_FLOAT(iVar0));
  VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_22.f_26, SYSTEM::TO_FLOAT(iVar0));
  VEHICLE::SET_VEHICLE_BODY_HEALTH(uParam0->f_22.f_26, SYSTEM::TO_FLOAT(iVar0));
  VEHICLE::_SET_VEHICLE_WHEELS_DEAL_DAMAGE(uParam0->f_22.f_26, true);
  func_3646(&(uParam0->f_22.f_26), uParam0->f_57, 2, -1);
}