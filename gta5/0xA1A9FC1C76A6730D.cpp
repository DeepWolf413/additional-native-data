// fm_bj_race_controler.ysc @ L283798
bool func_3826(int iParam0, int iParam1)
{
  return (((((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0)) || VEHICLE::_IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(iParam0)) || VEHICLE::_IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(iParam0)) || iParam0 == joaat("tula")) || iParam0 == joaat("dodo")) || iParam0 == joaat("seabreeze")) || (iParam1 && func_3827(iParam0)));
}