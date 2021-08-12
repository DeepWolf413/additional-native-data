// main.ysc @ L95335
void func_505()
{
  if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
  {
    Global_77055 = 1;
    Global_101484 = 1;
    func_692(1);
    func_506();
    VEHICLE::SET_RANDOM_TRAINS(false);
    VEHICLE::DELETE_ALL_TRAINS();
    NETWORK::NETWORK_BLOCK_INVITES(true);
    Global_4 = 1;
    REPLAY::_0x5AD3932DAEB1E5D3();
  }
}