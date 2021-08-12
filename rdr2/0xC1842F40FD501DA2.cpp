// rcm_crackpot1.ysc @ L8934
void func_314(int iParam0, vector3 vParam1, float fParam4)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
  {
    iParam0->f_1 = VEHICLE::CREATE_VEHICLE(joaat("RCBOAT"), vParam1, fParam4, true, true, false, false);
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0->f_1, 2);
    VEHICLE::_0xCBF88256E44D5D39(iParam0->f_1, 0);
    VEHICLE::_0xC1842F40FD501DA2(iParam0->f_1, false);
  }
}