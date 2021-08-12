// fm_survival_controller.ysc @ L8872
void func_117(int iParam0, int iParam1)
{
  VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
  ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, Global_4456448.f_135326.f_1192[iLocal_269 /*5*/][iParam1]);
  ENTITY::SET_ENTITY_HEALTH(iParam0, Global_4456448.f_135326.f_1192[iLocal_269 /*5*/][iParam1], 0);
  VEHICLE::SET_VEHICLE_BODY_HEALTH(iParam0, SYSTEM::TO_FLOAT(Global_4456448.f_135326.f_1192[iLocal_269 /*5*/][iParam1]));
  if (Global_4456448.f_135326.f_1298[iLocal_269 /*5*/][iParam1] != -1 && Global_4456448.f_135326.f_1298[iLocal_269 /*5*/][iParam1] != 47)
  {
    func_118(iParam0, func_124(Global_4456448.f_135326.f_1298[iLocal_269 /*5*/][iParam1]), -1, -1, -1, -1, -1082130432, -1);
  }
  if (func_106(iParam0))
  {
    VEHICLE::_0x0205F5365292D2EB(iParam0, 20f);
  }
  else
  {
    VEHICLE::_0x0205F5365292D2EB(iParam0, 10f);
  }
}