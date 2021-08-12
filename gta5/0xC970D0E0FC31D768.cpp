// fm_bj_race_controler.ysc @ L23033
void func_446(int iParam0)
{
  var uVar0;
  float fVar1;
  float fVar2;
  
  if (!func_289(iParam0))
  {
    if (Global_1390682 != -1)
    {
      uVar0 = Global_4456448.f_134202[Global_1390682];
      unk_0x5163D070808A608B(iParam0, 0, uVar0);
      unk_0x5163D070808A608B(iParam0, 1, uVar0);
      unk_0x5163D070808A608B(iParam0, 4, uVar0);
      unk_0x5163D070808A608B(iParam0, 5, uVar0);
      fVar1 = Global_4456448.f_134206[Global_1390682];
      VEHICLE::_SET_TYRE_WEAR_MULTIPLIER(iParam0, 0, fVar1);
      VEHICLE::_SET_TYRE_WEAR_MULTIPLIER(iParam0, 1, fVar1);
      VEHICLE::_SET_TYRE_WEAR_MULTIPLIER(iParam0, 4, fVar1);
      VEHICLE::_SET_TYRE_WEAR_MULTIPLIER(iParam0, 5, fVar1);
      fVar2 = Global_4456448.f_134210[Global_1390682];
      VEHICLE::_SET_TYRE_TRACTION_LOSS_MULTIPLIER(iParam0, 0, fVar2);
      VEHICLE::_SET_TYRE_TRACTION_LOSS_MULTIPLIER(iParam0, 1, fVar2);
      VEHICLE::_SET_TYRE_TRACTION_LOSS_MULTIPLIER(iParam0, 4, fVar2);
      VEHICLE::_SET_TYRE_TRACTION_LOSS_MULTIPLIER(iParam0, 5, fVar2);
    }
  }
}