// fm_content_vehicle_list.ysc @ L21518
void func_510(var uParam0, int iParam1)
{
  VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam1, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iParam1)));
  func_511(iParam1);
}