// mudtown2.ysc @ L25044
void func_401()
{
  int iVar0;

  iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(-310.0119f, 802.9316f, 117.9846f, joaat("VAL_SALOON_INT"));
  MISC::CLEAR_AREA(INTERIOR::_GET_INTERIOR_POSITION(iVar0), 50f, 1536);
}