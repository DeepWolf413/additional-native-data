// taxiservice.ysc @ L6082
void func_124()
{
  int iVar0;
  float fVar1;
  
  switch (iLocal_73)
  {
    case 0:
      iVar0 = joaat("sp0_dist_as_passenger_taxi");
      break;
    
    case 1:
      iVar0 = joaat("sp1_dist_as_passenger_taxi");
      break;
    
    case 2:
      iVar0 = joaat("sp2_dist_as_passenger_taxi");
      break;
    
    default:
      if (!func_40(14))
      {
      }
      break;
  }
  if (!func_40(14))
  {
    fVar1 = PATHFIND::CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_111331);
    STATS::STAT_INCREMENT(iVar0, fVar1);
  }
}