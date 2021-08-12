// fm_bj_race_controler.ysc @ L288959
void func_3992(var uParam0, var uParam1)
{
  if (!func_380(uParam0))
  {
    return;
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5318))
  {
    WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), func_748(ENTITY::GET_ENTITY_MODEL(uParam1->f_5318)));
    func_741(uParam1->f_5318, 1);
  }
}